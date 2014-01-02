/*
 * bcrypt.h
 *
 *  Created on: 11.11.2013
 *      Author: mh
 */

#ifndef BCRYPT_H_
#define BCRYPT_H_

void bcrypt(const char *key, const char *salt, char *encrypted);
void bcrypt_gensalt(u_int8_t log_rounds, u_int8_t *seed, char *gsalt);
void decode_base64(u_int8_t *buffer, u_int16_t len, u_int8_t *data);

u_int32_t bcrypt_get_rounds(const char * hash);

#endif /* BCRYPT_H_ */

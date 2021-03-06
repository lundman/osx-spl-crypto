#ifndef SUN_CCM_H
#define SUN_CCM_H


#define AES_BLOCK_LEN 16
#define CCM_AUTH_LEN 16

void sun_ccm_setkey(rijndael_ctx *cc_aes,
                    uint8_t *key, uint32_t keylen);

int  sun_ccm_decrypt_and_auth(rijndael_ctx *cc_aes,
                              crypto_data_t *cipher,
                              crypto_data_t *plain,
                              uint8_t *nonce, uint32_t noncelen,
                              uint32_t authlen);

int  sun_ccm_encrypt_and_auth(rijndael_ctx *cc_aes,
                              crypto_data_t *plain,
                              crypto_data_t *cipher,
                              uint8_t *nonce, uint32_t noncelen,
                              uint32_t authlen);

#endif

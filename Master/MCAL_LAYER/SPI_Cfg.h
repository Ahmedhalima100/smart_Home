

#ifndef SPI_CFG_H_
#define SPI_CFG_H_

/*Options :
 * MSB_FIRST
 * LSB_FIRST */
#define SPI_DATA_ORDER  MSB_FIRST


/*Options :
 * CLOCK_IDLE_HIGH
 * CLOCK_IDLE_LOW */
#define SPI_CLOCK_POLARITY   CLOCK_IDLE_HIGH


/*Options :
 * SAMPLE_IN_LEADING
 * SETUP_IN_LEADING */
#define SPI_CLOCK_PHASE  SETUP_IN_LEADING




#endif /* SPI_CFG_H_ */

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798F30 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58798f30() {
    __asm {
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 10: je 0x58798f46
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 24 03: and al, 3
        __asm _emit 0x24
        __asm _emit 0x03
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 75 07: jne 0x58798f46
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BB 06 0C 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

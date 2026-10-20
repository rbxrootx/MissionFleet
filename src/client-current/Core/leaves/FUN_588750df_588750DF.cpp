// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588750DF .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_588750df_588750DF() {
    __asm {
        ; Exact mapped bytes 80 3D 54 9C 96 58 00: cmp byte ptr [0x58969c54], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 3C: jne 0x58875124
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes C7 05 4C 9C 96 58 08 78 90 58: mov dword ptr [0x58969c4c], 0x58907808
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 48 9C 96 58 30 7B 90 58: mov dword ptr [0x58969c48], 0x58907b30
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x7b
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 44 9C 96 58 28 7A 90 58: mov dword ptr [0x58969c44], 0x58907a28
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x28
        __asm _emit 0x7a
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 3A FF FF: call 0x58868bae
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        push 58969c4ch
        push eax
        push 1
        push -3
        ; Exact mapped bytes E8 D0 FD FF FF: call 0x58874eea
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes C6 05 54 9C 96 58 01: mov byte ptr [0x58969c54], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        mov al, 1
        ret
    }
}

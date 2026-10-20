// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C245 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_0046c245_0046C245() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 10 2C FE FF: call 0x44ee72
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 477h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 99 76 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x76
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 1B 0C FB FF: call 0x41ce9c
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 A1 8B 00 00: call 0x474e2c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4B C5 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

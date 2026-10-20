// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5320 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_584c5320_584C5320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7E 1F FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 05: jne 0x584c533f
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 44: jmp 0x584c5383
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 2B FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 2B FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 51 FE FF: call 0x584aa4e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 FF FD FF FF: call 0x584c5170
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 07 00 00: call 0x584c5b20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

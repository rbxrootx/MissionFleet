// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533650 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_00533650_00533650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E7 C7 F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x533687
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a5h
        push 5820dch
        ; Exact mapped bytes E8 7E 13 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x533687
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x533662
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 61 A4 FB FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

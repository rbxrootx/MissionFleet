// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005379D3 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_005379d3_005379D3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x537a02
        __asm _emit 0x75
        __asm _emit 0x14
        push 430h
        push 636640h
        ; Exact mapped bytes E8 43 13 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x537a02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5379dd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FA 4A FA FF: call 0x4dc519
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE4F4 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_004de4f4_004DE4F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4de522
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5841b8h
        ; Exact mapped bytes E8 E3 64 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de522
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4de500
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 1040h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 3F 71 05 00: call 0x53569d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

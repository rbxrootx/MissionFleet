// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F30F1 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_004f30f1_004F30F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 14: jne 0x4f3122
        __asm _emit 0x75
        __asm _emit 0x14
        push 432h
        push 5c5574h
        ; Exact mapped bytes E8 E3 18 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f3122
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f30fd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 3D: jne 0x4f316e
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 20 26 5E 00: call dword ptr [0x5e2620]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 B0 FF FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 24 26 5E 00: call dword ptr [0x5e2624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 AF FF FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 18: jmp 0x4f3186
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE133 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004ee133_004EE133() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 F6 FF FF: call 0x4ed757
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 0F: jne 0x4ee15a
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 2D 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 14: jle 0x4ee17e
        __asm _emit 0x7e
        __asm _emit 0x14
        push 200h
        push 5c4bd4h
        ; Exact mapped bytes E8 87 68 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee17e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4ee15a
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 2D 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [eax + ecx], 0
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

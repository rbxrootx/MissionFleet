// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557B66 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00557b66_00557B66() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 209h
        push 67c630h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DD 26 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557ba0
        __asm _emit 0x75
        __asm _emit 0x14
        push 20ah
        push 67c630h
        ; Exact mapped bytes E8 A5 11 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557ba0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557b83
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 ED FF FF: call 0x55696d
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x557bfd
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        push 210h
        push 67c630h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 76 26 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp dword ptr [eax + 30h], 0
        sete cl
        mov eax, ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

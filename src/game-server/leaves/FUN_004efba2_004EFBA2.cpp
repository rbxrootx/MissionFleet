// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EFBA2 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004efba2_004EFBA2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c979h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E 17 00 00: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 582a8ch
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4efbf6
        __asm _emit 0x74
        __asm _emit 0x14
        push 93h
        push 5c5060h
        ; Exact mapped bytes E8 0F 4E 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4efbf6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4efbd9
        __asm _emit 0x75
        __asm _emit 0xdd
        push 20h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 3ch
        push eax
        ; Exact mapped bytes E8 64 97 FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

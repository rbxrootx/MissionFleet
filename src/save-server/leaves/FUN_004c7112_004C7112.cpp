// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7112 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_004c7112_004C7112() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4c715c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 95h
        push 6747cch
        ; Exact mapped bytes E8 E9 1B 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c715c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4c713f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4c7173
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC FD FF FF: call 0x4c6f1f
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
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

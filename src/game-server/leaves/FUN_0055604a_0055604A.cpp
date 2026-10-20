// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055604A .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_0055604a_0055604A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 56eh
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F9 50 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x556084
        __asm _emit 0x75
        __asm _emit 0x14
        push 56fh
        push 5cfa08h
        ; Exact mapped bytes E8 81 E9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556084
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x556067
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BF 9D F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5560af
        __asm _emit 0x75
        __asm _emit 0x14
        push 570h
        push 5cfa08h
        ; Exact mapped bytes E8 56 E9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5560af
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55608a
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 09: jne 0x5560c4
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [edx + 30h], 0
        sete al
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

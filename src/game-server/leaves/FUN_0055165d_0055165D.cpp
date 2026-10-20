// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055165D .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_0055165d_0055165D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 182h
        push 5cf7b8h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E4 9A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x5516a6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5F: jmp 0x551705
        __asm _emit 0xeb
        __asm _emit 0x5f
        push 18bh
        push 5cf7b8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A7 9A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 34 FA FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 18fh
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 89 9A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 585e80h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AC 99 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x99
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5516fc
        __asm _emit 0x75
        __asm _emit 0x14
        push 190h
        push 5cf7b8h
        ; Exact mapped bytes E8 09 33 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5516fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5516d7
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

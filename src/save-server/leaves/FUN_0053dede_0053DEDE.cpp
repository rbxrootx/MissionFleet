// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053DEDE .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_0053dede_0053DEDE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c571h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 95h
        push 6722d0h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 4E C3 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 14: je 0x53df32
        __asm _emit 0x74
        __asm _emit 0x14
        push 96h
        push 6722d0h
        ; Exact mapped bytes E8 13 AE FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53df32
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x53df12
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 70: je 0x53dfae
        __asm _emit 0x74
        __asm _emit 0x70
        push 20h
        ; Exact mapped bytes E8 1B E5 F8 FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe5
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1F: je 0x53df77
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1eh
        mov eax, dword ptr [ebp + 8]
        push eax
        push 63571ch
        push 635724h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 EA F9 FF: call 0x4dc9da
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x53df7e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        push 0
        push 635700h
        push 635710h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CE 17 00 00: call 0x53f790
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0b8h], eax
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

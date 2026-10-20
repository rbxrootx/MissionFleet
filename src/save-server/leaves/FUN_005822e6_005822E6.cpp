// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005822E6 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_005822e6_005822E6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e90bh
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
        sub esp, 110h
        push ebx
        push esi
        push edi
        push 100h
        lea eax, [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 24 7A F5 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7a
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x582334
        __asm _emit 0x75
        __asm _emit 0x14
        push 62ch
        push 67849ch
        ; Exact mapped bytes E8 11 6A FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x582334
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CD: jne 0x582307
        __asm _emit 0x75
        __asm _emit 0xcd
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 06: jne 0x582346
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 10h], eax
        push 62fh
        push 67849ch
        push 24h
        ; Exact mapped bytes E8 A8 9D F4 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 23: je 0x582390
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 4F FD FF FF: call 0x5820d7
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58239a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 114h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 110h], edx
        push 650ab0h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 56 35 EE FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

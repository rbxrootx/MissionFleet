// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046EAE0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_0046eae0_0046EAE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63ecf8h
        push 46d504h
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
        add esp, -14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x46eba4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 7E 14: jle 0x46eb35
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 09: jge 0x46eb35
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 08: jmp 0x46eb3d
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 46 0A 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + ecx*8 + 4], 0
        ; Exact mapped bytes 74 1C: je 0x46eb70
        __asm _emit 0x74
        __asm _emit 0x1c
        push 103h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*8 + 4]
        push eax
        ; Exact mapped bytes E8 60 06 00 00: call 0x46f1d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x46eb90
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 5E 00 00 00: call 0x46ebe0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*8]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x46eb0f
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 09: jne 0x46ebb5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 08: jmp 0x46ebbd
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 C6 09 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D6830 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_100d6830_100D6830() {
    __asm {
        push -1
        push 10173348h
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
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [ebx], 10176470h
        mov ecx, dword ptr [ebx + 64h]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 74 09: je 0x100d686c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 64h], edi
        lea esi, [ebx + 6ch]
        mov ebp, 6
        mov ecx, dword ptr [esi - 4]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100d6884
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 4], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100d6892
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], edi
        add esi, 8
        dec ebp
        ; Exact mapped bytes 75 DC: jne 0x100d6874
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 F9 C5 02 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

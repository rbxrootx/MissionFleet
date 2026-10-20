// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890CF00 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_5890cf00() {
    __asm {
        sub esp, 10h
        cmp dword ptr [ecx + 114h], 3e8h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5890cf94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [esp + 1ch]
        push esi
        mov esi, dword ptr [esp + 18h]
        sub eax, dword ptr [esi + 4]
        push edi
        add eax, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 1ch]
        add eax, dword ptr [edx]
        mov edx, dword ptr [edx + 4]
        sub edx, dword ptr [esi + 8]
        sub edi, dword ptr [ecx + 14h]
        add edx, dword ptr [ecx + 10h]
        mov esi, dword ptr [esi + 50h]
        add edx, dword ptr [ecx + 8]
        add edi, eax
        mov dword ptr [esp + 8], eax
        mov eax, dword ptr [ecx + 20h]
        sub eax, dword ptr [ecx + 18h]
        mov dword ptr [esp + 0ch], edx
        add eax, edx
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], eax
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x5890cf60
        __asm _emit 0x74
        __asm _emit 0x05
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes EB 02: jmp 0x5890cf62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov eax, dword ptr [ecx + 110h]
        mov eax, dword ptr [eax + 50h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5890cf74
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x5890cf76
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi]
        push 0
        push 1000000h
        add ecx, 11ch
        push ecx
        mov ecx, dword ptr [edx + 14h]
        push eax
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        pop edi
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

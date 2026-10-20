// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874A50 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58874a50() {
    __asm {
        push -1
        push 58986498h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [ebp], 5899ef40h
        mov dword ptr [esp + 1ch], 0
        lea esi, [ebp + 58h]
        mov ebx, 2
        mov ecx, dword ptr [esi - 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58874aa7
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 8], 0
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x58874abb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], 0
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 CE: jne 0x58874a91
        __asm _emit 0x75
        __asm _emit 0xce
        mov ecx, ebp
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 0E E9 08 00: call 0x589033e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}

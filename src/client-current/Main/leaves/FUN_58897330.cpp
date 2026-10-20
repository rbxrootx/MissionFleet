// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58897330 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_58897330() {
    __asm {
        push -1
        push 58987f48h
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
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [ebp], 589a00bch
        xor edi, edi
        xor ebx, ebx
        cmp dword ptr [ebp + 1a4h], edi
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 0F 8E 86 00 00 00: jle 0x588973fc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 0f4h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi - 1ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x58897392
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 1ch], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x588973a2
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi - 8ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588973ba
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 8ch], edi
        mov ecx, dword ptr [esi - 70h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x588973cc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 70h], edi
        mov ecx, dword ptr [esi - 54h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x588973de
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 54h], edi
        mov ecx, dword ptr [esi - 38h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x588973f0
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 38h], edi
        inc ebx
        add esi, 4
        cmp ebx, dword ptr [ebp + 1a4h]
        ; Exact mapped bytes 7C 84: jl 0x58897380
        __asm _emit 0x7c
        __asm _emit 0x84
        mov ecx, ebp
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 05 B8 06 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}

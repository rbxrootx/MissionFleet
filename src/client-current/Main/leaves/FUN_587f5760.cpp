// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F5760 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_587f5760() {
    __asm {
        push -1
        push 5898260bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        mov esi, ecx
        mov eax, dword ptr [esi + 10490h]
        add eax, dword ptr [esi + 10488h]
        xor edx, edx
        mov ecx, 1eh
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x587f58a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 21f34h]
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + edx*4]
        lea edi, [eax + edx*4]
        mov eax, 1b4e81b5h
        mul ecx
        shr edx, 4
        imul edx, edx, 96h
        sub ecx, edx
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x587f58a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 21914h], 2
        ; Exact mapped bytes 0F 8D C2 00 00 00: jge 0x587f58a2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov eax, 57619f1h
        mul ecx
        shr edx, 7
        imul edx, edx, 1770h
        sub ecx, edx
        add ecx, 0fa0h
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [edi]
        mov eax, 95cbec1bh
        mul ecx
        shr edx, 0bh
        imul edx, edx, 0dach
        sub ecx, edx
        add ecx, 5dch
        push 56ch
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes E8 28 74 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x74
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        xor edi, edi
        mov dword ptr [esp + 20h], edi
        cmp eax, edi
        ; Exact mapped bytes 74 36: je 0x587f586d
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        push 2710h
        push edi
        push edi
        push edi
        push edx
        mov edx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esi + 21910h]
        push ecx
        mov ecx, dword ptr [esi + 21914h]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 15 CC 0D 00: call 0x588d2480
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        lea eax, [esp + 10h]
        push eax
        push 64h
        mov ecx, edi
        mov dword ptr [esp + 28h], 0ffffffffh
        ; Exact mapped bytes E8 9D CC 0D 00: call 0x588d2520
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21914h]
        push ecx
        mov ecx, dword ptr [esi + 21910h]
        push edi
        add ecx, 138ch
        ; Exact mapped bytes E8 E4 99 FF FF: call 0x587ef280
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [esi + 21914h]
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
        add esp, 18h
        ret
    }
}

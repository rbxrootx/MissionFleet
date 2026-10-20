// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FF45 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_5886ff45_5886FF45() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ebx
        mov dword ptr [ebp - 30h], ebx
        mov dword ptr [ebp - 2ch], ebx
        mov dword ptr [ebp - 28h], ebx
        mov dword ptr [ebp - 24h], ebx
        mov dword ptr [ebp - 20h], ebx
        mov byte ptr [ebp - 1ch], bl
        mov dword ptr [ebp - 18h], ebx
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 8], ebx
        mov byte ptr [ebp - 4], bl
        ; Exact mapped bytes E8 AC 86 FE FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 30h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 81 FE FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x5886ffb8
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes E8 93 86 FE FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 81 FE FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 10h]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5886ffb8
        __asm _emit 0x75
        __asm _emit 0x0c
        push esi
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 15 DC 41 89 58: call dword ptr [0x588941dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebx, eax
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 07: je 0x5886ffc5
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 4C CC FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp byte ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 09: je 0x5886ffd4
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3D CC FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop esi
        mov eax, ebx
        pop ebx
        leave
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EB250 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_587eb250() {
    __asm {
        sub esp, 108h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 104h], eax
        push ebx
        push ebp
        push esi
        mov edx, ecx
        push edi
        xor eax, eax
        xor edi, edi
        mov dword ptr [esp + 10h], edx
        mov dword ptr [edx + 3ach], 0
        xor ecx, ecx
        lea esi, [edx + 3b0h]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 56: je 0x587eb2df
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 7C C4 14: mov word ptr [esp + eax*8 + 0x14], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0xc4
        __asm _emit 0x14
        mov ebx, dword ptr [edx + 4]
        ; Exact mapped bytes 66 8B 9C 19 7C 04 00 00: mov bx, word ptr [ecx + ebx + 0x47c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x19
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 3ffh
        ; Exact mapped bytes 66 23 DD: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xdd
        ; Exact mapped bytes 66 89 5C C4 16: mov word ptr [esp + eax*8 + 0x16], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x16
        mov ebx, dword ptr [edx + 4]
        mov ebx, dword ptr [ecx + ebx + 47ch]
        shr ebx, 0ah
        and ebx, ebp
        ; Exact mapped bytes 66 89 5C C4 18: mov word ptr [esp + eax*8 + 0x18], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x18
        mov edx, dword ptr [edx + 4]
        mov edx, dword ptr [ecx + edx + 47ch]
        shr edx, 14h
        and edx, ebp
        ; Exact mapped bytes 66 89 54 C4 1A: mov word ptr [esp + eax*8 + 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x1a
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esi], 0
        inc eax
        add ecx, 20h
        inc edi
        add esi, 4
        cmp ecx, 400h
        ; Exact mapped bytes 7C 96: jl 0x587eb284
        __asm _emit 0x7c
        __asm _emit 0x96
        pop edi
        pop esi
        pop ebp
        pop ebx
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x587eb31d
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [edx + 104f4h]
        push 0
        lea ecx, [eax*8]
        push ecx
        lea ecx, [esp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edx
        push 80020e01h
        ; Exact mapped bytes E8 53 59 18 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 104h]
        xor ecx, esp
        ; Exact mapped bytes E8 AF 18 19 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 108h
        ret
    }
}

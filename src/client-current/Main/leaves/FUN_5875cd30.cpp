// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CD30 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5875cd30() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 74h], 12ch
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 7E 0E: jle 0x5875cd54
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5875cd54
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x5875cd56
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 2F AC 1A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [eax + 170h], 0
        pop esi
        ; Exact mapped bytes 7E 18: jle 0x5875cd86
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5875cd86
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax]
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
        xor eax, eax
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}

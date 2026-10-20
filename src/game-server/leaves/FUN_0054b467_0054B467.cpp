// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B467 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_0054b467_0054B467() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5eh
        push 5ce570h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DF FC FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x54b49b
        __asm _emit 0x74
        __asm _emit 0x11
        push 5fh
        push 5ce570h
        ; Exact mapped bytes E8 6A 95 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b49b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54b481
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 18 2A 5E 00: call dword ptr [0x5e2a18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54b4c5
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 1
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x54b4c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E4CC .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_0055e4cc_0055E4CC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0fdh
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7A CC F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x55e4fd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax + 5ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 02: je 0x55e4ff
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x55e524
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 97 0E F9 FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0e
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x55e524
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

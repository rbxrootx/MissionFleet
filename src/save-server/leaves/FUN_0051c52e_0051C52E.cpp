// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C52E .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0051c52e_0051C52E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 189h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 31 9D FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x51c569
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1E: jmp 0x51c587
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 15: je 0x51c584
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 09: je 0x51c584
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

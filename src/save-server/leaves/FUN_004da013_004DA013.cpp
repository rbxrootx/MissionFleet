// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA013 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004da013_004DA013() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        mov dword ptr [ebp - 20ch], ecx
        lea eax, [ebp - 208h]
        push eax
        push 200h
        lea ecx, [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp - 20ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4da066
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes E8 80 CA 01 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 24: jmp 0x4da08a
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4da073
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0f020h
        mov ecx, dword ptr [ebp - 208h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A2 CA 01 00: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

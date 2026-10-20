// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004641E5 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004641e5_004641E5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 8], eax
        push 150h
        push 67cd04h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 59 60 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x464224
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1F: jmp 0x464243
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        add edx, 0e0h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx + 0e0h]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
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

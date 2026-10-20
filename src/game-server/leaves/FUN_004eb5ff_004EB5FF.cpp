// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB5FF .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004eb5ff_004EB5FF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0d4h
        push 5c7d74h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 45 FB 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 FE FF FF: call 0x4eb4dd
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 4E: jne 0x4eb682
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4eb64e
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5E FB FF FF: call 0x4eb1ac
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0E FD FF FF: call 0x4eb364
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + edx*4]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

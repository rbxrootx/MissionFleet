// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7237 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004c7237_004C7237() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0c2h
        push 6747cch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0D 30 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 19 FF FF FF: call 0x4c717c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 4E: jne 0x4c72ba
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4c7286
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C6 FB FF FF: call 0x4c6e4c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 FD FF FF: call 0x4c7004
        __asm _emit 0xe8
        __asm _emit 0x76
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9874 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_004e9874_004E9874() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0d9h
        push 5c4fd0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 D0 18 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 FE FF FF: call 0x4e9759
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 5D: jne 0x4e9906
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4e98c3
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 FA FF FF: call 0x4e93ac
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F7 FC FF FF: call 0x4e95c2
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 17 42 00 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

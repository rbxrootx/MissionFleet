// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4960 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_585f4960_585F4960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 116ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1F 17 E9 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x17
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1168h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 49 15 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x15
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 116ch]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 15 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x15
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

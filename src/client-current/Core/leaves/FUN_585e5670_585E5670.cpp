// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E5670 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_585e5670_585E5670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 220cch]
        mov dword ptr [ebp - 8], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 08 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 220cch]
        mov dword ptr [ebp - 0ch], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 23 08 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0xea
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

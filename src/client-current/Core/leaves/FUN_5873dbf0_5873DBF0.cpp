// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873DBF0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5873dbf0_5873DBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 8], edx
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E F2 FF FF: call 0x5873cec0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

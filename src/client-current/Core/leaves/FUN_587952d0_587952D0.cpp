// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587952D0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_587952d0_587952D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 19 FF FF: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2D 19 FF FF: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 F2 B1 D3 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb1
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

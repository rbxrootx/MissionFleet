// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E4F0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0042e4f0_0042E4F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 634518h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        shl eax, 3
        push eax
        ; Exact mapped bytes E8 24 DF 09 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D FB FF FF: call 0x42e090
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 90 68 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

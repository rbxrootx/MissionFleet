// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B5F0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_5850b5f0_5850B5F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 B3 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 C4 F7 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 0ch]
        or edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

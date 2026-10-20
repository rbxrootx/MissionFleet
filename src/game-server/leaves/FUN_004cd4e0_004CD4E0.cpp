// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD4E0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_004cd4e0_004CD4E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 3A 06 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 23: jl 0x4cd518
        __asm _emit 0x7c
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 00 02 00: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 0F BE 55 08: movsx edx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 5B BE FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

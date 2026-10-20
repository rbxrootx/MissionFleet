// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532188 .. +0x3F bytes.
extern "C" __declspec(naked) void FID_conflict___GCPoint__QBE_AVCRect__PBUtagRECT___Z_00532188() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F 00 00 00: call 0x532226
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F1 05 00 00: call 0x5327af
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

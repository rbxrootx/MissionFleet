// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A06E0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_004a06e0_004A06E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 46 08 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 23: jl 0x4a0718
        __asm _emit 0x7c
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 BE 02 00: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbe
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
        ; Exact mapped bytes E8 AB 51 FC FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x51
        __asm _emit 0xfc
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

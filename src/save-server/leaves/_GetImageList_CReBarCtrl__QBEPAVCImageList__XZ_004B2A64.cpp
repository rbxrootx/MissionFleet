// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2A64 .. +0x43 bytes.
extern "C" __declspec(naked) void _GetImageList_CReBarCtrl__QBEPAVCImageList__XZ_004B2A64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0ch
        mov dword ptr [ebp - 8], 1
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 1A 00 00: call 0x4b4550
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4b2a99
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FC 90 FF FF: call 0x4abb90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4b2aa0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}

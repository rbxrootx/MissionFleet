// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3D00 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_586e3d00_586E3D00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x586e3d18
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 06: jmp 0x586e3d1e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx*4 + 94h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 FF FF FF: call 0x586e3c70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xff
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

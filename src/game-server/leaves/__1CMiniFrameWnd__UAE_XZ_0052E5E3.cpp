// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E5E3 .. +0x63 bytes.
extern "C" __declspec(naked) void __1CMiniFrameWnd__UAE_XZ_0052E5E3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f2f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588724h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 47 FC FF: call 0x4f2df2
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c8h
        ; Exact mapped bytes E8 23 F2 FB FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 BB FF FF: call 0x52a13f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043883C .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0043883c_0043883C() {
    __asm {
        mov eax, 43b182h
        ; Exact mapped bytes E8 C2 6D FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43f288h
        lea ecx, [esi + 18h]
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E8 49 53 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 14h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 3D 53 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea ecx, [esi + 0ch]
        ; Exact mapped bytes E8 31 53 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}

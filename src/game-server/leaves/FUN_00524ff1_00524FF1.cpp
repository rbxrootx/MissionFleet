// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524FF1 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00524ff1_00524FF1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 3c3h
        push 5c8174h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 53 61 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x525023
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 C0 D5 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x525049
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA EE 00 00: call 0x533ef5
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 3c9h
        push 5c8174h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 1F 61 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 62 FB FF: call 0x4db286
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

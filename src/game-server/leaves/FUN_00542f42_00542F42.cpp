// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542F42 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00542f42_00542F42() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cc08h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A DA FE FF: call 0x530990
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 8F DF FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 80 DF FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 71 DF FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 62 DF FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 583334h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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

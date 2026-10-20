// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479A20 .. +0x3A bytes.
extern "C" __declspec(naked) void FID_conflict___set_errno_from_matherr_00479A20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 0E: je 0x479a3e
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 7E 20: jle 0x479a56
        __asm _emit 0x7e
        __asm _emit 0x20
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7E 0F: jle 0x479a4b
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes EB 18: jmp 0x479a56
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes E8 3D 3C FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        ; Exact mapped bytes EB 0B: jmp 0x479a56
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes E8 30 3C FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        mov esp, ebp
        pop ebp
        ret
    }
}

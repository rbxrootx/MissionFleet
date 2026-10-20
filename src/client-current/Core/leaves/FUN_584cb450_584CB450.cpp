// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CB450 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_584cb450_584CB450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 7E 48: jle 0x584cb4aa
        __asm _emit 0x7e
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 74h]
        cdq
        mov ecx, 0fh
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 25: jne 0x584cb499
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 18h]
        ; Exact mapped bytes E8 FA 43 FD FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 34h]
        ; Exact mapped bytes E8 E8 43 FD FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], eax
        ; Exact mapped bytes EB 3D: jmp 0x584cb4e7
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C AA FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 34h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 02 AA FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A FF FF FF: call 0x584cb3f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

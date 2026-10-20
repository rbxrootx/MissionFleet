// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874430 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_58874430_58874430() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov ecx, esi
        ; Exact mapped bytes 66 0F D6 45 F0: movq qword ptr [ebp - 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xf0
        shr ecx, 10h
        and ecx, 3fh
        mov dword ptr [ebp - 8], 0
        mov edx, ecx
        mov eax, ecx
        and edx, 1
        neg edx
        ; Exact mapped bytes 0F 11 45 E0: movups xmmword ptr [ebp - 0x20], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe0
        sbb edx, edx
        and eax, 2
        and edx, 20h
        neg eax
        sbb eax, eax
        and eax, 10h
        or edx, eax
        mov eax, ecx
        and eax, 4
        neg eax
        sbb eax, eax
        and eax, 8
        or edx, eax
        mov eax, ecx
        and eax, 8
        neg eax
        sbb eax, eax
        and eax, 4
        or edx, eax
        test ecx, 10h
        mov eax, 0
        setne al
        and ecx, 20h
        or edx, eax
        neg ecx
        sbb ecx, ecx
        and ecx, 2
        or edx, ecx
        ; Exact mapped bytes D9 75 E0: fnstenv [ebp - 0x20]
        __asm _emit 0xd9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 1ch]
        and edx, 3fh
        and eax, 0ffffffc0h
        or eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes D9 65 E0: fldenv [ebp - 0x20]
        __asm _emit 0xd9
        __asm _emit 0x65
        __asm _emit 0xe0
        shr esi, 18h
        and esi, 3fh
        mov ecx, esi
        mov eax, esi
        and ecx, 1
        neg ecx
        sbb ecx, ecx
        and eax, 2
        and ecx, 20h
        neg eax
        sbb eax, eax
        and eax, 10h
        or ecx, eax
        mov eax, esi
        and eax, 4
        neg eax
        sbb eax, eax
        and eax, 8
        or ecx, eax
        mov eax, esi
        and eax, 8
        neg eax
        sbb eax, eax
        and eax, 4
        or ecx, eax
        test esi, 10h
        mov eax, 0
        setne al
        and esi, 20h
        or ecx, eax
        neg esi
        sbb esi, esi
        and esi, 2
        or ecx, esi
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        pop esi
        ; Exact mapped bytes 7C 16: jl 0x58874535
        __asm _emit 0x7c
        __asm _emit 0x16
        ; Exact mapped bytes 0F AE 5D FC: stmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 4]
        and ecx, 3fh
        and eax, 0ffffffc0h
        or eax, ecx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F AE 55 FC: ldmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x55
        __asm _emit 0xfc
        mov esp, ebp
        pop ebp
        ret
    }
}
